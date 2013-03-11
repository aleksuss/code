typedef enum {
    clubs,
    diamonds,
    hearts,
    spades
} Suit;

typedef enum {
    ace,
    two,
    three,
    four,
    five,
    six,
    seven,
    eight,
    nine,
    ten,
    jack,
    queen,
    king
} Card;

typedef struct {
    Suit suit;
    Card card;
} PlayingCard;

