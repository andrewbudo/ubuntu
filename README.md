# ubuntu

```
$ sudo nano /etc/apt/apt.conf  
Acquire::http::proxy "http://172.16.160.10:8070/";
Acquire::https::proxy "http://172.16.160.10:8070/";
```
```
$ sudo apt install git
$ git config --global user.name "Andrew Budo"
$ git config --global user.email "mail@gmail.com"
// чтобы после первого ввода пароля(токена) git запомнил его:
$ git config --global credential.helper cache
// чтобы git перестал поминить токен:
$ git config --global --unset credential.helper
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
Profit.

# windows

for git proxy (this works for both http and https repos): 

```
git config --global http.proxy http://172.16.160.10:8070
// git config --global http.proxy http://proxyuser:proxypwd@172.16.160.10:8070
```
to reset this proxy and work without proxy: 

```
git config --global --unset http.proxy
```

to check the currently set proxy:
```
git config --global --get http.proxy
```
