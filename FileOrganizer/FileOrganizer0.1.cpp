#include <iostream>
#include <filesystem>
#pragma warning (disable : 4996)

int main() {
	bool running = true;
	std::cout << "Welcome to File Organizer\n";
	char response;
	while (running) {
		std::cout << "Do you want to organize your files? (y/n)\n";
		std::cin >> response;
		if (response == 'y')
		{
			std::cout << "Which folder do you want to organize?\nPlease enter the folder location in this format 'C:/path/folder'";
			std::string user_home = std::getenv("USERPROFILE");
			std::string username = std::filesystem::path(user_home).filename().string();
			std::string folder = "C:/Users/" + username + "/Downloads";
			std::cin >> folder;
			std::cout << "Please wait while we organize your files\n";
			std::filesystem::path music = "C:/Users/" + username + "/OneDrive/Music/Playlists";
			std::filesystem::path documents = "C:/Users/" + username + "/OneDrive/Documents";
			std::filesystem::path movies = "D:/Movies";
			std::filesystem::path pictures = "C:/Users/" + username + "/OneDrive/Pictures";
			std::filesystem::path panemera = "D:/EDMUND'S WORK/PANEMERA";

			for (auto const& file : std::filesystem::directory_iterator(std::filesystem::path(folder)))
			{
				try
				{
					if (file.path().extension() == ".mp3") {
						if (!std::filesystem::exists(music/file.path().filename())) {
							std::filesystem::copy(file.path(), music);
							std::filesystem::remove(file.path());
							std::cout << "Done\n";
						}
						else {
							std::cout << file.path().filename() << " already exists in " << music << "\n";
						}
						
					}
					else {
						std::cout << "No .mp3 file found\n";
					}


					if (file.path().extension() == ".pdf" || file.path().extension() == ".docx" || file.path().extension() == ".pptx") {
						if (!std::filesystem::exists(documents/file.path().filename())) {
							std::filesystem::copy(file.path(), documents);
							std::filesystem::remove(file.path());
							std::cout << "Done\n";
						}
						else {
							std::cout << file.path().filename() << " already exists in " << documents << "\n";
						}
					}
					else {
						std::cout << "No .pdf .docx file found\n";
					}

					if (file.path().extension() == ".mp4" || file.path().extension() == ".mpeg") {
						if (!std::filesystem::exists(movies)) {
							std::filesystem::create_directories(movies);
							continue;
						}
						if (!std::filesystem::exists(movies / file.path().filename())) {
							std::filesystem::copy(file.path(), movies);
							std::filesystem::remove(file.path());
							std::cout << "Done\n";
						}
						else {
							std::cout << file.path().filename() << " already exists in " << movies << "\n";
						}
					}
					else {
						std::cout << "No .mpeg .mp4 file found\n";
					}
					if (file.path().extension() == ".jpeg" || file.path().extension() == ".png" || file.path().extension() == ".jpg") {
						if (!std::filesystem::exists(pictures / file.path().filename())) {
							std::filesystem::copy(file.path(), pictures);
							std::filesystem::remove(file.path());
							std::cout << "Done\n";
						}
						else {
							std::cout << file.path().filename() << " already exists in " << pictures<< "\n";
						}
					}
					else {
						std::cout << "No .jpeg .jpg .png file found\n";
					}
					if (file.path().extension() == ".mov") {
						if(!std::filesystem::is_directory(panemera)){
							std::filesystem::create_directory(panemera);
							continue;
						}
						if (!std::filesystem::exists(panemera / file.path().filename())) {
							std::filesystem::copy(file.path(), panemera);
							std::filesystem::remove(file.path());
							std::cout << "Done\n";
						}
						else {
							std::cout << file.path().filename() << " already exists in " << panemera << "\n";
						}
					}
					else {
						std::cout << "No .mov file found\n";
					}

				}
				catch (const std::exception& msg)
				{
					std::cerr << msg.what();
				}
			}

		}
		else if (response == 'n') {
			std::cout << "Come back again";
			running = false;
		}
		else {
			std::cout << "Invalid input try again\n";
		}
	}
	return 0;
}