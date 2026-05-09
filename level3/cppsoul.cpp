// ============================================
// RAII — Resource Acquisition is Initialization
// ============================================

// PROBLEM — purana tarika
// ————————————————————————
void func() {
    int* arr = new int[1000];  // heap pe memory li
    // ... kuch kaam kiya
    // delete[] arr;  ← bhool gaye = MEMORY LEAK ❌
}

// RAII KA IDEA — ek line mein
// ————————————————————————————
// Resource lo constructor mein
// Chhod do destructor mein
// Destructor automatic call hota hai — bhoolna possible hi nahi

// RAII KA EXAMPLE
// ————————————————
class FileHandler {
    FILE* file;
public:
    FileHandler(string name) {
        file = fopen(name.c_str(), "r");  // constructor — resource lo
    }
    ~FileHandler() {
        fclose(file);  // destructor — automatically chhod do
    }
};

void func() {
    FileHandler f("data.txt");  // file khuli
    // ... kaam karo
}   // scope khatam — destructor automatic call — file band ✅
    // delete/fclose manually likhna nahi pada

// DESTRUCTOR KAB ZARURI HAI
// ——————————————————————————
// Sirf tab jab andar new use kiya ho

// Zaruri nahi:
struct Edge {
    int u, v, w;
    // int primitive hai — compiler sambhalta hai
    // destructor likhne ki zarurat nahi ✅
};

// Zaruri hai:
class MyArray {
    int* data;
public:
    MyArray(int size) : data(new int[size]) {}  // new kiya
    ~MyArray() { delete[] data; }               // delete karna pada ✅
};

// SMART POINTERS — RAII READY MADE
// ——————————————————————————————————
// make_unique aur make_shared andar se RAII implement karte hain
// isliye banaye gaye — manually likhna tedious tha

auto p = make_unique<int>(42);
// scope khatam → automatic delete ✅
// ~MyArray likhna nahi pada

// GOLDEN RULES
// —————————————
// new likha andar?   → destructor likho, delete karo
// new nahi likha?    → chinta nahi, compiler sambhalta hai
// make_unique?       → RAII already hai, destructor ki zarurat nahi

// RAII = resource ki zimmedari object ko do, insaan ko nahi
// Object khud sambhal lega. ✅