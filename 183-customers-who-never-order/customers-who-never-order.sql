
select c.name as customers
from Customers c left join Orders as o
on c.id = o.customerId
where o.customerId is null