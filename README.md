### Notes :

#### To re-compile automatically on file changes :
* Install `entr`
````bash
    sudo apt install entr
````

* Run the below command to watch for C++ file changes, compile & run :
````bash
ls *.h *.cpp | entr -r sh -c 'echo "$(date) : Recompiling\n" && \
g++ *.cpp && \
./a.out && \
echo "\n\nDONE------------\n"'
````

