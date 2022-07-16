# linux 

## terminal
```
// show file on interactive mode
$ tail -f mydir/myfile.txt
ctrl+a // go to command begin
ctrl+e // go to command end
ctrl+u // del command
ctrl+z // send app to background
$ fg // send app to foreground
$ history
$ !119 // call command from history
```
## ssh
```
$ sudo nano /etc/apt/apt.conf  
Acquire::http::Proxy "http://172.16.160.10:8070/";
Acquire::https::Proxy "http://172.16.160.10:8070/";
$ sudo apt update
$ sudo apt-get install openssh-server
$ ssh lena@172.16.160.8

// copy file to / from remote server
$ scp b.out lena@172.16.160.8:~/tmogi/
$ scp lena@172.16.160.8:~/tmogi/b.out b2.out

$ sftp lena@172.16.160.8
$ put lab1.cpp to_lena_lab1.cpp
$ get lab2.cpp from_lena_lab2.cpp
$ exit

// get .ssh keys (private and public)
$ ssh-keygen
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

## tmux

ctrl+b, %: vertical split
ctrl+b, ": horisontal spit
ctrl+b, arrows: change window
ctrl+b, ctrl+arrows: change size of window
```
// change vim colors
$ vim ~/.tmux.conf
set -g default-terminal "screen-256color"
$ :wq

$ vim ~/.vimrc
  set background=dark
  set tabstop=4
  :wq


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
## cmake
```
$ sudo apt-get install cmake
$ vim CMakeLists.txt
  cmake_minimum_required(VERSION 3.10 FATAL_ERROR)
  project(BudoProject)
  add_executable(BudoEx src/main.cpp)
  :wq
$ mkdir build
$ cd build
$ cmake ..
$ cmake --build . --config Release
$ git status
$ echo build >> .gitignore
$ git add .
$ git commit -m "add cmake"
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
## Android
// run termux
$ pkg install openssh
$ passwd
// input new password twice
// start ssh server (demon)
$ sshd
// v shtorke termux: wake llock held
// show current ip address
$ ip addr
// go to your advice (notebook)
$ ssh 192.168.100.2 -p8022
// type password
// you looged to your android phone

// to kill server
$ killall sshd

// to start python server on android phone
$ pkg install python
$ mkdir www && cd www
$ python -m http.server

// from notebook browser
http://192.168.100.2:8000

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
