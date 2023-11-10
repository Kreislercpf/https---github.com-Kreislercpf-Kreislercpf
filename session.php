<?php
    include('connect.php');

    session_start();
    
    $id = $_SESSION['id'];
    $fname = $_SESSION['firstname'];
    $lname = $_SESSION['lastname'];
    $session = $_SESSION['logged_in'];

    //combine SQL query
    $query = mysqli_query($conn, "select id, count(id) as user_count from users_db.");
    $view = mysqli_fetch_array($query);
    $user_count = $view["user_count"];

    //retrieve the image from the database
    $image_query = "SELECT * FROM users_db. WHERE id='$id";
    //$image_query = mysqli_query($conn, "select * from users_db where id = '$id'");
?>
