<html lang="en">

<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Login</title>
</head>

<body>
    <form action="" method="post">
        <label for="username">Username</label>
        <input type="text" name="username" id="username">
        <br>
        <label for="password">Password</label>
        <input type="password" name="password" id="password">
        <br>
        <button type="submit">Login</button>
    </form>

    <?php
    session_start();
    if ($_SERVER["REQUEST_METHOD"] !== "POST") {
        return;
    }
    if ($_POST['logout']) {
        echo 'logged out';
        session_unset();
        session_destroy();
        $_SESSION = NULL;
        exit();
    }


    include "load_users.php";
    $users = load("../data/users.csv");
    $username = $_POST["username"];

    if (!isset($users[$username])) {
        echo "User does not exist";
        exit();
    }
    $user = $users[$username];

    if ($_POST["password"] === $user["password"]) {
        $_SESSION["username"] = $_POST["username"];
        $_SESSION["email"] = $user["email"];
        $_SESSION["name"] = $user["name"];
        $_SESSION["surname"] = $user["surname"];
        header("Location: index.php");
        exit();
    } else {
        echo "Invalid credentials!";
    }
    ?>
</body>

</html>