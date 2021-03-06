/*
	fixed_point.h
	
	fixed-point arithmetic operations for pintos
	using 17.14 fixed-point number representation
*/

#define F (1<<14)

/*
	x,y : fixed-point numbers
	n : integer
*/

int int_to_fp(int n);
int fp_to_int_round(int x);
int fp_to_int(int x);
int add_fp(int x, int y);
int add_mixed(int x, int n);
int sub_fp(int x, int y);
int sub_mixed(int x, int n);
int mult_fp(int x, int y);
int mult_mixed(int x, int n);
int div_fp(int x, int y);
int div_mixed(int x, int n);

int int_to_fp(int n){
	return n*F;
}
int fp_to_int(int x){
	return x/F;
}

int fp_to_int_round(int x){
	return x > 0 ? (x+F/2)/F : (x-F/2)/F;
}
int add_fp(int x, int y){
	return x+y;
}
int add_mixed(int x, int n){
	return x+n*F;
}
int sub_fp(int x, int y){
	return x-y;
}
int sub_mixed(int x, int n){
	return x-n*F;
}
int mult_fp(int x, int y){
	return (((int64_t)x)*y)/F;
}
int mult_mixed(int x, int n){
	return x*n;
}
int div_fp(int x, int y){
	return (((int64_t) x)*F)/y;
}
int div_mixed(int x, int n){
	return x/n;
}



