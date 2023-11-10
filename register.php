<?php
    require_once('connect.php');

    if(isset($_POST['submit'])) {
        if($conn){
            $fullname = $_POST['fullname'];
            $email = $_POST['email'];
            $picture = $_POST['picture'];
            $username = $_POST['username'];
            $password = $_POST['password'];
         

            $query = "insert into users_db. (fullname,email,picture,password,regs_date) value('$fullname','$email','$picture','$username','$password',NOW())";

            $result = mysqli_query($conn,$query);

            if($result) {
                echo '<script type="text/JavaScript">';
                echo 'alert("Successfully Registered!");';
                echo '</script>'; ?>
                <script type ="text/Javascript">
                    window.location='login.html';
                </script>
            <?php
            }
            else {
                $err[] = 'Registration failed...'.mysqli_error($conn);
            }
            mysqli_close($conn);
        }
        else {
            die('Connection Failed: '.mysqli_connect_error());
        }

    }


?>