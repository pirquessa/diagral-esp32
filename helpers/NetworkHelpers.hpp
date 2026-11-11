#pragma once

namespace Helpers
{
    typedef void (*ConnectedCallback)(); // Callback to call when network is connected
    class NetworkHelpers
    {
    public:
        /// @brief Initialize network (Wifi / Ethernet, then DHCP / static IP address, then SNTP server synchronization)
        static void InitNetwork(ConnectedCallback connectedCallback);

        /// @brief Get current connection status
        /// @return true if currently connected to network, false otherwise
        static bool isConnected();

        /// @brief Set Wi-Fi modem power saving. Ethernet builds do not support this mode.
        /// @return true if the requested mode was applied
        static bool SetEcoMode(bool ecoMode);

        /// @brief Get the currently applied eco mode
        static bool IsEcoMode();
    };

}