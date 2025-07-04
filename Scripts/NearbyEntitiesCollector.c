class NearbyEntitiesCollector : QueryEntitiesCallback
{
    array<IEntity> m_Entities;

    override bool Call(IEntity entity)
    {
        m_Entities.Insert(entity);
        return true;
    }
}
