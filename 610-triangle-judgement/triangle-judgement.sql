# Write your MySQL query statement below
select x,y,z, 
case when (x + y > z && x + z > y && z + y > x) then 'Yes'
            else 'No'
            END
as triangle
from Triangle