ipl = LOAD '/home/node1/Desktop/cricket5.csv' USING PigStorage(',') as (inning,overs,team,stk,nstk,bowler,run,extra,type,name);

l = filter ipl by type!='run out';

m = group l by $5;

n = foreach m generate group,COUNT(l);

o = order n by $1 DESC;

p = limit o 10;

dump p;
