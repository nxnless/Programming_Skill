	
	if(topLeft == 1 ){
		visit[y-1][x-1] = 1;
		result = true;
	}else if(topRight ==1 ){
		visit[y-1][x+1] = 1;
		result = true;
	}else if(top == 1){
		visit[y-1][x] = 1;
		result = true;
	}else if(midLeft==1){
		visit[y][x-1] = 1;
		result = true;
	}else if(midRight ==1){
		visit[y][x+1] = 1;
		result = true;
	}else if(mid ==1){
		visit[y][x] = 1;
		result = true;
	}else if( botLeft==1){
		visit[y+1][x-1] = 1;
		result = true;
	}else if(botRight==1){
		visit[y+1][x+1] = 1;
		result = true;
	}else if(bot==1){
		visit[y+1][x] = 1;
		result = true;
	}
