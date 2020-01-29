<?hh <<__EntryPoint>> function main(): void {
$limit = 1000;
$objects = new SplObjectStorage;
for($i = 0; $i < $limit; $i++){
    $object = new StdClass;

    if(isset($objects[$object])){
        die("this should never happen, but did after $i iteration");
    }

    $objects[$object] = 1;
}
echo "==DONE==";
}