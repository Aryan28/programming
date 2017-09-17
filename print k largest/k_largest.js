var a = [12,5,787,1,23,120,23,12,9,30,2,50];
// console.log(a);
var k = 4,largest;
var b=[];

for(var j=0;j<k;j++)
{
	// console.log("value of j:",j);
	largest=a[0];
	if(j==0)
	{
		for (var i = 1; i < a.length; i++) {
			if(a[i]>largest){
				largest=a[i];
			}
			


		}
		b[j]=largest;
		
	}
	else
	{
		for (var i = 1; i < a.length; i++) {
			if(a[i]>largest && a[i]<b[j-1]){
				largest=a[i];
			}
		}
		b[j]=largest;
		// console.log("b[j]", b[j]);
	}
	console.log(b);
}