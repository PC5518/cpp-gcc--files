n=int(input())
k=int(input())
sample_list=[]
for i in range(1,k+1):
	for j in range(i+1,n+1):
		sample_list.append([i,j])
print(sample_list)
