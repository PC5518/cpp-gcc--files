## nodes & how it differs from the vector contigous memory. (generally we are talking about double end nodes)
<img width="1529" height="515" alt="image" src="https://github.com/user-attachments/assets/fa335b05-c38c-4ccf-a8f3-cd1513e294ac" />

<img width="1634" height="585" alt="image" src="https://github.com/user-attachments/assets/c01adc5c-9e13-4a76-9da1-0997ff7cb97f" />
## std::list can efficiently insert at both ends because each node stores BOTH a next pointer and a previous pointer. therefore support both push_back and front and also pop back and front.

<img width="1586" height="881" alt="image" src="https://github.com/user-attachments/assets/69634a86-c1ed-4bbe-99d6-4ca19364131c" />

# single linked node where we can only move forward or backward. 
<img width="783" height="589" alt="image" src="https://github.com/user-attachments/assets/6958a52a-69a9-4734-9451-fd388b2a5954" />
getting the intuition begind why onyl push_front and why not push_back. the discovery of node pointer absense in the last elements which lacks the adress of the newly added element created on the heap .  whereas this is not an issue in the push_front. beecause compiler has the adress to the first element
<img width="761" height="419" alt="image" src="https://github.com/user-attachments/assets/ae4bd9c0-26db-4d05-b0dd-8c6cca2db9c3" />
<img width="774" height="442" alt="image" src="https://github.com/user-attachments/assets/a00d21c6-5837-43fd-ba43-9e65786ed6de" />

