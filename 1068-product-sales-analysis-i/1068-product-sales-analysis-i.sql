# Write your MySQL query statement below
select p.product_name,s.year,s.price from Sales as s
natural join Product as p
where s.product_id=s.product_id;