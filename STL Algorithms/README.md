# These are the notes of my own understanding in my own words regarding the stl Algorithm.
# The basic rule of stl algorithm. bash:  cppman std::search . note:valid for some of the stl algorithm.
<img width="1919" height="1032" alt="image" src="https://github.com/user-attachments/assets/3a5f7f60-1140-424d-801a-f00ea33ecb33" />
# function signature concept: NOW ABOUT THE KHAALI JAGAH IN THE STL ALGORITHMS THAT I REALISED. SOON IN ONE NOTE !
<img width="463" height="702" alt="image" src="https://github.com/user-attachments/assets/8fdf2d73-db82-46b8-87b1-16f030fba33e" />
# FXN signature for std::generate .  point to observe: lambda's structure for different stl algorithms can be different
<img width="1919" height="1079" alt="image" src="https://github.com/user-attachments/assets/be713b89-f190-47ee-b21e-ef673407b73a" />
# one of the most important stl fxn to understand and be catious is std::**remove**(v.begin(), v.end(), integer to be removed). it shouldd be used with the combined use of the pre defined member fxn that is v.erase(giving the iterator collected as the input to v.end()iterator )
<img width="1919" height="1031" alt="image" src="https://github.com/user-attachments/assets/82182224-c9d0-4c34-ad8d-37379c8a658a" />
# Working rule of std::rotate() stl algorithm
<img width="1915" height="994" alt="image" src="https://github.com/user-attachments/assets/afd62a58-31b2-49ff-ac16-57d18b95e590" />
<img width="1243" height="585" alt="image" src="https://github.com/user-attachments/assets/f6f55c97-1826-4462-bcc7-44256608d2cb" />

#  std::unique(v.begin(), v.end()) returns an iterator just same as std::remove and using it and inserting it to v.erase(it, v.end()) and remove the rubbish elements:
#  IMPORTANT REALISATION:  toh ye ek sequence me dekhta hai UNIQUENESS. toh ye set wala uniqueness all over the container nahi dikhata hai .   INPUT: 2,2,2,4,2,3,2   OUTPUT:  2 4 2 3 2 
<img width="1413" height="1018" alt="image" src="https://github.com/user-attachments/assets/222d81cc-ac9e-45d1-a669-c942162fadb1" />

