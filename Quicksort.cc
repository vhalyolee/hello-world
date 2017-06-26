class Pair {
	int min;
	int max;
}
 
public class SortArray {
 
	public static Pair getMinMax(int Arr[], int Arrlength) {
  
  if (Arr == null || .length < 1)
		return;
    
		Pair result = new Pair();
		Pair left = new Pair();
		Pair right = new Pair();
 
		// if there is only one element
		if (Arr.length==1) {
			result.max = Arr[0];
			result.min = Arr[0];
			return result;
		}
 
		// if there are two elements
		if (Arr.length==2) {
			if (Arr[0] > Arr[1]) {
				result.max = Arr[0];
				result.min = Arr[1];
			} else {
				result.max = Arr[1];
				result.min = Arr[0];
			}
			return result;
		}
 
		// if there are more than 2 elements
		int mid = Arr.length)/ 2.;
		left = getMinMax(Arr, 0, mid);
		right = getMinMax(Arr, mid + 1, Arr.length);
 
		if (left.min < right.min)
			result.min = left.min;
		else
			result.min = right.min;
 
		if (left.max > right.max)
			result.max = left.max;
		else
			result.max = right.max;
 
		return result;
	}
 
	public static void main(String[] args) {
		int testArr[] = { 3, 4, 2, 6, 8, 1, 9, 12, 15, 11 };
		Pair result = getMinMax(a1, 0, testArr.length - 1);
 
 for (int i=0;i<Arr.lenth;i++)
		cout<<Arr[i]<<endl;
	
}
