select customer_id
from customer
group by customer_id
having count(DISTINCT product_key) = (SELECT COUNT(*) FROM Product);