# linux 

```
$ sudo nano /etc/apt/apt.conf  
Acquire::http::Proxy "http://172.16.160.10:8070/";
Acquire::https::Proxy "http://172.16.160.10:8070/";
$ sudo apt update
$ sudo apt-get install openssh-server
$ ssh lena@172.16.160.8
$ scp b.out lena@172.16.160.8:~/tmogi/
$ sftp lena@172.16.160.8
$ put lab1.cpp to_lena_lab1.cpp
$ get lab2.cpp from_lena_lab2.cpp
$ exit
// to change password
$ passwd
```
## copy text to clipboard
```
1) visually select a block text in normal mode: V<motionkey>
2-a) run ex: :'<,'>w !xsel -b
2-b) :.w !xsel -b to copy arbitrary selection or the current line (see "additional tip" below)
3) paste into another program
... and now assign this to your favorite key-mapping.
```
The options -b mean, that the program xsel is sent to the background and wait for another program to paste the content

**additional tip**: to copy the current line (where the cursor is located) very fast I map this command :.w !xsel -b to a key of choice - so copy works with and without a visual selection

## ssh
```
$ ssh-keygen
```

## git
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

## gedit
```
$ sudo apt-get install gedit-plugins
// Options / turn on Embedded Terminal / Ctrl + F9
// From text-editor to terminal: F6
// From terminal to text-editor: Ctrl+Tab Esc
$ vim ~/.bashrc
// add to the bottom: 
// alias c="g++ --std=c++11 -Wall -Wextra -O2"
$ c lab1.cpp
```

## windows

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
