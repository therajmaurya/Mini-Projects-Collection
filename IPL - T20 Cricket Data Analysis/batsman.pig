ipl = LOAD '/home/node1/Desktop/cricket5.csv' USING PigStorage(',') as (inning,overs,team,stk,nstk,bowler,run,extra,type,name);

a = group ipl by $3;

b = foreach a generate group,SUM(ipl.$6);

c = order b by $1 DESC;

d = limit c 10;

dump d;

