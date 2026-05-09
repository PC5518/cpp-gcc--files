Pehle problem samajh
Abhi tu constructor mein likhta hai:
cppcar(int s) {
    speed = s;  // pehle speed bana, phir assign kiya
}
Yeh do steps hain — pehle speed bana (default value ke saath), phir s assign kiya. Thoda wasteful.
