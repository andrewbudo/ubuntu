# ubuntu

$ sudo nano /etc/apt/apt.conf  
```
Acquire::http::proxy "http://172.16.160.10:8070/";
Acquire::https::proxy "https://172.16.160.10:8070/";
```
```
$ sudo apt install git
$ git config --global user.name "Andrew Budo"
$ git config --global user.email "mail@gmail.com"
$ git config --global credential.helper cache
// после первого ввода пароля(токена) git запомнит его
```
```
$ git clone https://github.com/andrewbudo/ubuntu.git
$ vim test.txt
```
"some text in file test.txt"
```
$ git add test.txt
$ git commit -m "created test.txt file"
$ git push
```






