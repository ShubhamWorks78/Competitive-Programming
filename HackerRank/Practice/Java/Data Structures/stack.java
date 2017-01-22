import java.util.*;
public class stack {
	public static void main(String...s){
		Scanner sc = new Scanner(System.in);
		
		while(sc.hasNext()){
			String str = sc.next();
			char ch[] = str.toCharArray();
			Stack<Character> st = new Stack<Character>();
			int i;
			int boo = 0;
			for(i=0;i<ch.length;i++){
				if(ch[i]=='(' || ch[i]=='[' || ch[i]=='{'){
					st.push(ch[i]);
				}
				else{
					if(st.isEmpty()){
						boo = 1;
						break;
					}
					else{
						char seq = st.peek();
						st.pop();
						if(seq=='(' && (ch[i]==']' || ch[i]=='}')){
							boo = 1;
							break;
						}
						if(seq=='[' && (ch[i]=='}' || ch[i]==')')){
							boo = 1;
							break;
						}
						if(seq=='{' && (ch[i]==']' || ch[i]==')')){
							boo = 1;
							break;
						}
					}
				}
			}
			if(!st.isEmpty()){
				boo = 1;
			}
			if(boo==1){
				System.out.println("false");
			}
			else if(boo==0){
				System.out.println("true");
			}
		}
	}

}
