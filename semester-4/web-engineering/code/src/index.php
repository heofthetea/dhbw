<html lang="en">

<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>??????????</title>
</head>

<body>

    <?php
    session_start();
    if (isset($_SESSION['username'])) {
        header('Location: random-form.php');
        exit();
    }
    header("Location: login.php");
    exit();
    ?>
</body>

</html>