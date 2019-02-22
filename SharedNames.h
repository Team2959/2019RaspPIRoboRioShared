namespace Rpi2959Shared
{
    namespace Tables
    {
         const wpi::StringRef    TableName{ "IATable" };    // The name of the NetworkTables table name to use
    }

    // We have noticed when monitoring table changes that the keys might be clipped at times...
    // so use short abbreviations...these only need to be separate from each other
    namespace Keys
    {
        const wpi::StringRef    BackCargoResults{ "BCR" };
        const wpi::StringRef    BackFloorTapeResults{ "BFTR" };
        const wpi::StringRef    BackFrameNumber{ "BFN" };
        const wpi::StringRef    BackHatchResults{ "BHR" };
        const wpi::StringRef    BackPortTapeResults{ "BPTR" };
        const wpi::StringRef    BackTargets{ "BT" };

        const wpi::StringRef    FrontCargoResults{ "FCR" };
        const wpi::StringRef    FrontFloorTapeResults{ "FFTR" };
        const wpi::StringRef    FrontFrameNumber{ "FFNr" };
        const wpi::StringRef    FrontHatchResults{ "FHR" };
        const wpi::StringRef    FrontPortTapeResults{ "FPTR" };
        const wpi::StringRef    FrontTargets{ "FT" };
    }

    enum class ProcessingTargets
    {
        Cargo = 0x01,       // Binary 0001
        PortTape = 0x02,    // Binary 0010
        FloorTape = 0x04,   // Binary 0100
        Hatch  = 0x08       // Binary 1000
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
