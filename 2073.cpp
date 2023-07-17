int timeRequiredToBuy(int* tickets, int ticketsSize, int k){
  int time=0;
  while(tickets[k]>0){
    for(int j=0;j<ticketsSize;j++){
      if(tickets[j]>0){
        tickets[j]--;
        time++;
      }
      if(tickets[k]==0)
        break;
    }
  }
  return time;
}
