/*
========================================================
CURLY BRACES {} vs PARENTHESES ()
========================================================

--------------------------------------------------------
1. PARENTHESES ()
--------------------------------------------------------

Example:

int x(3.9);

Allowed.

Result:
3.9 --> 3

Meaning:
data loss / narrowing conversion ho sakta hai.

Compiler mostly silently allow kar deta hai.


--------------------------------------------------------
2. CURLY BRACES {}
--------------------------------------------------------

Example:

int x{3.9};

ERROR.

Reason:
{} narrowing conversions prevent karta hai.

So:
{} safer initialization syntax hai.


--------------------------------------------------------
3. MODERN C++ PREFERENCE
--------------------------------------------------------

Modern C++ mostly:
{} prefer karta hai

because:
- safer
- uniform initialization
- accidental conversions reduce


--------------------------------------------------------
4. IMPORTANT DIFFERENCE
--------------------------------------------------------

Kabhi kabhi:
() aur {}

different constructors call karte hain.


Example:

std::vector<int> v1(5,10);

Meaning:
5 elements
each value = 10


BUT:

std::vector<int> v2{5,10};

Meaning:
elements = [5,10]


Same numbers.
Different symbols.
Completely different meaning.


--------------------------------------------------------
5. CORE INTUITION
--------------------------------------------------------

() :
more permissive
implicit conversions allow karta hai


{} :
safer
strict
narrowing conversion rokta hai


========================================================
FINAL RULE
========================================================

Modern C++ me generally:
{} preferred initialization style hai.

========================================================
*/