ipl = LOAD '/home/node1/Desktop/cricket5.csv' USING PigStorage(',') as (inning,overs,team,stk,nstk,bowler,run,extra,type,name);

f = filter ipl by $6=='4';

g = group f by $3;

h = foreach g generate group,COUNT(f);

i = order h by $1 DESC;

j = limit i 20;

dump j;
