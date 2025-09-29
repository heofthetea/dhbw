<?php
function load($filename)
{
    $users = [];
    $file = fopen($filename, "r");
    fgets($file); // skip header line
    while ($line = fgets($file)) {
        $user = explode(",", $line);
        $users[$user[0]] = [
            "username" => $user[0],
            "password" => $user[1],
            "name" => $user[2],
            "surname" => $user[3],
            "email" => $user[4]
        ];
    }
    fclose($file);
    return $users;
}
?>