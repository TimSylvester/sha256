#include <stdint.h>
#include <stdio.h>
#include <array>
#include <bitcoin/bitcoin/math/external/sha256.h>

int main(int /*argc*/, char* /*argv*/[])
{
	std::array<uint8_t, SHA256_DIGEST_LENGTH> data;
	std::fill(data.begin(), data.end(), 0);

	std::array<uint8_t, SHA256_DIGEST_LENGTH> result;
	SHA256(data.data(), data.size(), result.data());

	for (size_t i = 0; i < SHA256_DIGEST_LENGTH; ++i)
	{
		printf("%02x", result[i]);
	}
	printf("\n");

	return 0;
}

