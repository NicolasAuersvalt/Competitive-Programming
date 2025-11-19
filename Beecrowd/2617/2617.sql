SELECT products.name,providers.name
FROM providers, products
WHERE providers.name='Ajax SA' AND products.id_providers = providers.id