
function solve(m, n){
	let i = 1; count = 0;
	while(i*Math.min(m, n) < Math.max(m, n)){
		i++;
		count += Math.min(m, n) - 1;
	}

	return 2*(Math.min(m, n) - 1) + Math.max(m,n) - Math.min(m, n) - i;
}

console.log(solve(2,7))
console.log(solve(2,5))