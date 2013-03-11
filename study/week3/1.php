<?
function arrayShift(&$arr, $len, $shift) {

$shift = $shift % $len;
$from = 0;
$what = $arr[$from];
for($i = 0; $i < $len; $i++) {
        $to = ($from + $shift) % $len;
        $tmp = $arr[$to];
        $arr[$to] = $what;
        $what = $tmp;
        $from = $to;
        }
}

$arr = array(1, 2, 3, 4, 5, 6, 7);
arrayShift($arr, count($arr), 3);
print_r($arr);
?>
