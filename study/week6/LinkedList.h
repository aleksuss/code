#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#include <iostream>

template <class Type>
class LinkedList {
    public:
        struct ListItem {
                ListItem *preview;
                ListItem *next;
                Type value;

                ListItem(const Type& value) : value(value) {}

                bool operator==(ListItem& otherItem) {
                    return value == otherItem.value;
                }
                bool operator!=(ListItem& otherItem) {
                    return value != otherItem.value;
                }
        };

        struct Iterator {
                ListItem *item;

                Iterator(ListItem *item) : item(item) {}
                Iterator() {}

                void Increment() { item = item->next; }
                void Decrement() { item = item->preview; }

                bool operator==(const Iterator& iter) {
                    return item == iter.item;
                }
                bool operator!=(const Iterator& iter) {
                    return item != iter.item;
                }

                Iterator operator++() {
                    this->Increment();
                    return *this;
                }

                Iterator operator++(int) {
                    Iterator tmpIt = *this;
                    this->Increment();
                    return tmpIt;
                }
                Iterator operator--() {
                    this->Decrement();
                    return *this;
                }

                Iterator operator--(int) {
                    Iterator tmpIt = *this;
                    this->Decrement();
                    return tmpIt;
                }

                Iterator operator=(Iterator other) {
                    item = other.item;
                    item->next = other.item->next;
                    item->preview = other.item->preview;
                }

                Type& operator*() const { return item->value; }
        };

    private:
        ListItem *member;
        Iterator current;
        int length;

    public:
        typedef Iterator iterator;
        typedef const Iterator const_iterator;
        typedef Type& reference;
        typedef const Type& const_reference;

        LinkedList() : member(new ListItem(NULL)), current(member), length(0) {
            member->next = member;
            member->preview = member;
        }

        LinkedList(int count, const Type& value) : member(new ListItem(NULL)), current(member), length(0) {
            member->next = member;
            member->preview = member;
            insert(this->begin(), count, value);
        }

        LinkedList(LinkedList<Type>& otherList) : member(new ListItem(NULL)), current(member), length(0) {
            member->next = member;
            member->preview = member;
            insert(this->begin(), otherList.begin(), otherList.end());
        }

        LinkedList(iterator first, iterator last) {
            insert(begin(), first, last);
        }

        virtual ~LinkedList() { 
            delete member;
        }

        iterator insert(iterator iter, const Type& value) {
            ListItem *addItem = new ListItem(value);            
            
            addItem->next = iter.item;
            addItem->preview = iter.item->preview;
            iter.item->preview->next = addItem;
            iter.item->preview = addItem;
            length++;            
            return addItem;
        }

        void insert(iterator iter, int n, const Type& value) {
            for ( int i = 0; i < n; i++ ) {
                insert(iter, value);
            }
        }

        void insert(iterator iter, iterator first, iterator last) {
            for ( ; first != last; first++ ) {
                insert(iter, *first);
            }
        }

        iterator erase(iterator iter) {
            ListItem *next = iter.item->next;
            ListItem *prev = iter.item->preview;
            prev->next = next;
            next->preview = prev;
            length--;
            return iterator(next);
         }

         iterator erase(iterator first, iterator last) {
            for ( ; first != last; first++ ) {
                erase(first);
            }
            return iterator(last);
         }

        void push_back(const Type& value) {
            insert(end(), value);
        }

        void push_front(const Type& value) {
            insert(begin(), value);
        }

        int size() { return length; }

        bool empty() { return length <= 0; }

        void pop_front() { erase(begin()); }

        void pop_back() {
            iterator tmp = end();
            tmp--;
            erase(tmp);
        }

        iterator begin() { return current.item->next; }

        iterator end() { return current; }

        const_iterator begin() const { return current.item->next; }

        const_iterator end() const { return current; }

        iterator rbegin() { return current; }

        iterator rend() { return current.item->next; }

        const_iterator rbegin() const { return current; }

        const_iterator rend() const { return current.item->next; }

        LinkedList operator=(LinkedList& otherList) {
            if ( this != &otherList ) {
                iterator first = begin();
                iterator last = end();
                iterator otherFirst = otherList.begin();
                iterator otherLast = otherList.end();
                for ( ; first != last && otherFirst != otherLast; first++, otherFirst++ ) {
                    *first = *otherFirst;
                }
                if ( otherFirst == otherLast ) {
                    erase(first, last);
                } else {
                     insert(first, otherFirst, otherLast);
                }
            }
            return *this;
        }

        reference back() { 
            iterator tmp = end();
            tmp--;
            return *tmp; 
        }

        const_reference back() const {
            iterator tmp = end();
            tmp--;
            return *tmp; 
        }
        
        reference front() { return *begin(); }
        
        const_reference front() const { return *begin(); }

        void remove(const Type& value) {
            for ( iterator i = begin(); i != end(); i++ ) {
                if ( *i == value ) {
                    erase(i);
                }
            }
        }

        void assign(int count, const Type& value) {
            iterator i = begin();

            for ( ; i != end() && count > 0; i++, count-- ) {
                *i = value;
            }
            if ( count > 0 ) {
                insert(end(), count, value);
            } else {
                erase(i, end());
            }
        }

        void assign(iterator first, iterator last) {
            iterator i = begin();
            for ( ; i != end(); i++, first++ ) {
                *i = *first;
            }
            if ( first == last ) {
                erase(i, end());
            } else {
                insert(i, first, last);
            }
        }

        void clear() {
            erase(begin(), end());
        }

        unsigned int max_size() { return (unsigned int)-1; }

        void merge(LinkedList<Type>& list) {
            insert(end(), list.begin(), list.end());
        }

        void resize(int size, const Type& value) {
            iterator i = begin();
            int len = 0;
            
            for ( ; i != end() && len < size; i++, len++ );
            if ( len == size ) {
                erase(i, end());
            } else {
                insert(i, size-len, value);
            }
        }

        void resize(int size) { resize(size, Type()); }

        void reverse() {
            LinkedList<Type> temp;

            for ( iterator it = begin(); it != end(); it++ ) {
               temp.push_front(*it);
            }
            *this = temp;
        }

        void move(iterator pos, iterator first, iterator last) {
            if ( pos != last ) {
                last.item->preview->next = pos.item;
                first.item->preview->next = last.item;
                pos.item->preview->next = first.item;
                iterator tmp = pos.item->preview;
                pos.item->preview = last.item->preview;
                last.item->preview = first.item->preview;
                first.item->preview = tmp.item;
            }
        }

        void sort() {
            LinkedList<Type> temp;
            iterator first = begin();
            iterator check = end();
            iterator min = check;
            for ( int i = length - 1; i > 0; i--, check-- ) {
                min = check;
                iterator first = begin();
                for ( int j = 0; j < i; j++, first++ ) {
                    if ( *first < *min ) {
                        min = first;
                    }
                }
                temp.push_front(*min);
            }
            *this = temp;
        }

        void splice(iterator it, LinkedList<Type>& list) {
            if (!list.empty()) {
                this->move(it, list.begin(), list.end());
            }
        }
        void splice(iterator it, LinkedList<Type>& list, iterator i) {
            iterator x = i;
            x++;
            if ( it == i || it == x ) {
                return;
            }
            this->move(it, i, x);
        }

        void splice(iterator pos, LinkedList<Type>& list, iterator first, iterator last) {
            if ( first != last ) {
                this->move(pos, first, last);
            }
        }

        void swap(LinkedList<Type>& list) {
            LinkedList<Type> temp(list);
            list = *this;
            *this = temp;
        }
        
        void unique() {
            iterator first = begin();
            iterator last = end();
            if ( first == last ) {
                return;
            }
            iterator tmp = first;
            tmp++;
            for ( ; tmp != last; tmp++ ) {
                if ( *first == *tmp ) {
                    erase(tmp);
                } else {
                    first = tmp;
                    tmp = first;
                }
            }
        }

};

#endif
