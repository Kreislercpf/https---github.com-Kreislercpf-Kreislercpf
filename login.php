<?php
    require_once('connect.php');

    if(isset($_POST['submit'])) {
        if($conn){
        
            $username = $_POST['username'];
            $password = $_POST['password'];

        
            $query = "SELECT * FROM users_tbl WHERE username='$username' and password='$password'";
            $result = $conn->query($query) or die($conn->error);
            $count = $result->num_rows;
           
            if($count != 0) {
                $_SESSION['loggedin'] = true;
                $_SESSION['username'] = $username; 
                echo '<script type="text/JavaScript">';
                echo 'alert("Successfully logged-in!");';
                echo '</script>'; 
                ?>
                <script type ="text/Javascript">
                    window.location='admin_dashboard.php'; 
                </script>
                <?php
            }
            else {
                echo '<script type="text/JavaScript">';
                echo 'alert("Invalid credentials, try again!");';
                echo '</script>'; 
                ?>
                <script type ="text/Javascript">
                    window.location='login.html'; 
                </script>
                <?php
            }
            mysqli_close($conn);
        }
        else {
            die('Connection Failed: '.mysqli_connect_error());
        }
    }
?>