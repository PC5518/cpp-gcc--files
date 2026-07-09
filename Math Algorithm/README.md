The dot product: but this time in C++ can be achieved by std::inner_product.
<img width="1721" height="754" alt="image" src="https://github.com/user-attachments/assets/7f195d43-74d8-4a53-9f71-580c4a95884b" />
The computational analogy of direction vectors or unit vectors in C++. The unit vector is judge by the index. the same index of two containers will be consider of the same direction to the particular direction.
<img width="1911" height="1042" alt="image" src="https://github.com/user-attachments/assets/1889e4ee-f876-4f9a-a3b6-170e63a03a8f" />
Because std::inner_product is a "Reduce" operation, it needs a starting point before it can begin adding things up.
<img width="1919" height="1038" alt="image" src="https://github.com/user-attachments/assets/024f7fbc-04af-4448-b2d8-c547d001e7b5" />
## Observation: Important how the std::adjacent_difference and std::partial_sum are interconnected
<img width="1919" height="997" alt="image" src="https://github.com/user-attachments/assets/73103985-8df4-41f4-91fd-1bf1bb2d5173" />
here's the practical code example: 
<img width="1385" height="1017" alt="image" src="https://github.com/user-attachments/assets/cc110426-1392-4ecf-bb12-e59845b9f286" />
the container summation: std::accumulate                 Complexity:  O(n)
<img width="1903" height="943" alt="image" src="https://github.com/user-attachments/assets/8925419f-0f98-43ef-beed-bc996c909d1a" />
