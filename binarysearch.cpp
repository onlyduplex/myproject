int findOrInsertZone(std::vector<Zone>& zones, int targetId) {
    int left = 0;
    int right = zones.size() - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (zones[mid].id == targetId) {
            return mid;  // found
        }
        else if (zones[mid].id < targetId) {
            left = mid + 1;
        }
        else {
            right = mid - 1;
        }
    }

    // Not found → insert at position `left`
    Zone newZone;
    newZone.id = targetId;
    newZone.amount = 1;

    zones.insert(zones.begin() + left, newZone);

    return left;  // index where inserted
}

