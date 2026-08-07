class CustomMission: MissionServer
{
    override void StartingEquipSetup(PlayerBase player, bool clothesChosen)
    {
        player.RemoveAllItems();

        player.GetInventory().CreateAttachment("TShirt_Grey");
        player.GetInventory().CreateAttachment("Jeans_Blue");
        player.GetInventory().CreateAttachment("AthleticShoes_Black");

        player.GetInventory().CreateInInventory("Candycane_Red");
        player.GetInventory().CreateInInventory("BandageDressing");
        player.GetInventory().CreateInInventory("HuntingKnife");
        player.GetInventory().CreateInInventory("ChernarusMap");
    }
};

Mission CreateCustomMission(string path)
{
    return new CustomMission();
}
