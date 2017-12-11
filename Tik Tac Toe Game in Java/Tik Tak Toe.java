import java.util.Scanner;

class Pro{
	
	
	public static void main(String[] args)
	
	{
		Scanner sc=new Scanner(System.in);
		int x,y,l,s;
		String name1,name2;
		
		
		char[][] a=new char[3][3];
		a[0]=new char[]{32,32,32};
		a[1]=new char[]{32,32,32};
		a[2]=new char[]{32,32,32};
		
		
		 System.out.println("            Tick-Tak-Toe       ");
		 System.out.print("Player 1 enter your name : ");
		 name1=sc.next();
		 System.out.println("");
		 System.out.print("Player 2 enter your name : ");
		 name2=sc.next();
		 
		
		
		
		for(int k=0;k<10;k++)
		{
		for(int i=0;i<a.length;i++)
			
			{  System.out.println("");
			
			   //looping to display matrix begins
				for(int j=0;j<a[i].length;j++)
				{
					System.out.print(a[i][j]);
					if(j<a[i].length-1)
					{
						System.out.print(" | ");
					}
					
				}
				System.out.println("");
				if(i<a.length-1)
					{
						System.out.print("----------");
					}
					
				//looping to display matrix ends
				
				
			}
			
			if(k==9)
			{break;}    //to display matrix for 10th time if exist
           
 			
		 if(k%2==0)  // for chance of name1
				{
					do{System.out.println("Chance of "+name1+" :Enter Row (1-3) & Column (1-3)");
					
					
						l=0;
						
						    x=sc.nextInt();
					        y=sc.nextInt();
					        if((x<4&&y<4)&&(x>0&&y>0))
					{
						if((a[x-1][y-1]!='X'&& a[x-1][y-1]!='O'))
							a[x-1][y-1]='X';
						else
						{
							System.out.println("Already Chosen!");
						l++;
						}	
					}
						
					else {
						System.out.println("Enter Valid row & column try again ");
						l++;
					}
				    
					}while(l!=0);
					
				}
				
				else if(k%2==1)
				{
					do{System.out.println("Chance of "+name2+" :Enter Row (1-3) & Column (1-3)");
					
					
						s=0;
						
							
					x=sc.nextInt();
					y=sc.nextInt();
					
					if((x<4&&y<4)&&(x>0&&y>0))
					{
						if((a[x-1][y-1]!='X'&& a[x-1][y-1]!='O'))
						a[x-1][y-1]='O';
						else
						{
								System.out.println("Already Choosed !");
						s++;
						}
					}
				    
					else{
						System.out.println("Enter Valid row & coulmn try again ");
						s++;
					}}while(s!=0);
				
					
	}
	
	            if((a[0][0]=='X' && a[0][1]=='X' && a[0][2]=='X')||(a[1][0]=='X' && a[1][1]=='X' && a[1][2]=='X')||(a[2][0]=='X' && a[2][1]=='X' && a[2][2]=='X')||(a[0][0]=='X' && a[1][1]=='X' && a[2][2]=='X')||(a[0][2]=='X' && a[1][1]=='X' && a[2][0]=='X')||(a[0][0]=='X' && a[1][0]=='X' && a[2][0]=='X')||(a[0][1]=='X' && a[1][1]=='X' && a[2][1]=='X')||(a[0][2]=='X' && a[1][2]=='X' && a[2][2]=='X'))
				{
					System.out.println(name1+" wins");
			
				
		     break;
					
					
				}
                else if((a[0][0]=='O' && a[0][1]=='O' && a[0][2]=='O')||(a[1][0]=='O' && a[1][1]=='O' && a[1][2]=='O')||(a[2][0]=='O' && a[2][1]=='O' && a[2][2]=='O')||(a[0][0]=='O' && a[1][1]=='O' && a[2][2]=='O')||(a[0][2]=='O' && a[1][1]=='O' && a[2][0]=='O')||(a[0][0]=='O' && a[1][0]=='O' && a[2][0]=='O')||(a[0][1]=='O' && a[1][1]=='O' && a[2][1]=='O')||(a[0][2]=='O' && a[1][2]=='O' && a[2][2]=='O'))
				{
					System.out.println(name2+" wins");
						
					break;
				}					
	
	    
		
					
				}
				
	
	
	
	
	
 	}
}