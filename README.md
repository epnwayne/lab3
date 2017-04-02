A:
make

B:

SIZE = 1000
	sort(): 0.000146 seconds	
	insertion_sort(): 0.006957 seconds
	
SIZE = 10000
	sort(): 0.001896 seconds
	insertion_sort(): 0.740091 seconds

SIZE = 100000
	sort(): 0.02367 seconds
	insertion_sort(): 75.0086 seconds

SIZE = 1000000
	sort(): 0.287861 seconds
	insertion_sort(): 7272.03 seconds

插入排序法(Insertion sort)的時間複雜度最多可能到N^2
sort()函數則是NlogN
因此若資料都是N筆，插入排序法約會花上sort() "N/logN" 倍的時間                      

