
select distinct city from STATION
where mod(id,2)=0
order by city;