public class Murder {
	public static void main(String[] args) {
		Scanner in=new Scanner(System.in);
		System.out.println("enter the total no");
		int n=in.nextInt();
		System.out.println("enter the elements");
		int [] arr=new int[n];
		int s=0;
		for(int i=0;i<n;i++){
			arr[i]=in.nextInt();
		}
			for (int k=0;k<n;k++){
			for(int j=k;j<n;j++){
				s+=arr[j]-arr[k];
					}
		}
			System.out.println(s);
	
	}
  }
