namespace Rpi2959Shared
{
    namespace Tables
    {
         const wpi::StringRef    TableName{ "IATable" };    // The name of the NetworkTables table name to use
    }

    namespace Keys
    {
        const wpi::StringRef    BackCargoResults{ "BackCargoResults" };
        const wpi::StringRef    BackFloorTapeResults{ "BackFloorTapeResults" };
        const wpi::StringRef    BackFrameNumber{ "BackFrameNumber" };
        const wpi::StringRef    BackHatchResults{ "BackHatchResults" };
        const wpi::StringRef    BackPortTapeResults{ "BackPortTapeResults" };
        const wpi::StringRef    BackTargets{ "BackTargets" };

        const wpi::StringRef    FrontCargoResults{ "FrontCargoResults" };
        const wpi::StringRef    FrontFloorTapeResults{ "FrontFloorTapeResults" };
        const wpi::StringRef    FrontFrameNumber{ "FrontFrameNumber" };
        const wpi::StringRef    FrontHatchResults{ "FrontHatchResults" };
        const wpi::StringRef    FrontPortTapeResults{ "FrontPortTapeResults" };
        const wpi::StringRef    FrontTargets{ "FrontTargets" };
    }

    enum class ProcessingTargets
    {
        Cargo = 0x01,
        PortTape = 0x02,
        FloorTape = 0x04,
        Hatch  = 0x08
    };

    constexpr ProcessingTargets operator &(ProcessingTargets a, ProcessingTargets b)
    {
        return static_cast<ProcessingTargets>(static_cast<int>(a) & static_cast<int>(b));
    }

    constexpr ProcessingTargets operator |(ProcessingTargets a, ProcessingTargets b)
    {
        return static_cast<ProcessingTargets>(static_cast<int>(a) | static_cast<int>(b));
    }
}
