
#define check_error(return_val,msg){	\
			if(return_val !=0){		\
				fprintf(stderr,"%s: %s\n",msg,strerror(return_val));		\
			}	\
		}\
