// FileOrganizer.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

//#include <iostream>
//#include <filesystem>
//#pragma warning(disable : 4996)
//int main()
//{
//    std::string user_home = std::getenv("USERPROFILE");
//    std::string username = std::filesystem::path(user_home).filename().string();
//    std::cout << username +"\n";
    //find files with types and organize them
    // in downloads mpeg, mp4, = d:/movies
    // in downloads pdf, docx, = documents
    // in my d mp3 = music;
    //for (auto const& f : std::filesystem::directory_iterator("C:/Users/edmun/Downloads"))
    //{
    //    try
    //    {

    //    
    //    if (f.path().extension() == ".mp3") {
    //        if (!std::filesystem::exists("C:/Users/edmun/OneDrive/Music/Playlists" /f.path().filename())) {
    //        std::filesystem::copy(f.path(), "C:/Users/edmun/OneDrive/Music/Playlists");
    //        std::filesystem::remove(f.path());
    //            
    //        }
    //        else {
    //            std::cout << f.path().filename() << " already exists in " << "C:/Users/edmun/OneDrive/Music/Playlists" << "\n";
    //        }
    //        std::cout << "Done\n";
    //     } else {
    //        std::cout << "No .mp3 file found\n";
    //    }


    //    if (f.path().extension() == ".pdf" || f.path().extension() == ".docx") {
    //        if (!std::filesystem::exists("C:/Users/edmun/OneDrive/Documents" / f.path().filename())) {
    //            std::filesystem::copy(f.path(), "C:/Users/edmun/OneDrive/Documents");
    //            std::filesystem::remove(f.path());
    //        }
    //        else {
    //            std::cout << f.path().filename() << " already exists in " << "C:/Users/edmun/OneDrive/Documents" << "\n";
    //        }
    //        std::cout << "Done\n";
    //    }
    //    else {
    //        std::cout << "No .pdf .docx file found\n";
    //    }

    //    if (f.path().extension() == ".mp4" || f.path().extension() == ".mpeg") {
    //        if (!std::filesystem::exists("D:/Movies" / f.path().filename())) {
    //            std::filesystem::copy(f.path(), "D:/Movies");
    //            std::filesystem::remove(f.path());
    //        }
    //        else {
    //            std::cout << f.path().filename() << " already exists in " << "D:/Movies" << "\n";
    //        }
    //        std::cout << "Done\n";
    //    }
    //    else {
    //        std::cout << "No .mpeg .mp4 file found\n";
    //    }
    //    if (f.path().extension() == ".jpeg" || f.path().extension() == ".png" || f.path().extension() == ".jpg") {
    //        if (!std::filesystem::exists("D:/Movies" / f.path().filename())) {
    //            std::filesystem::copy(f.path(), "C:/Users/edmun/OneDrive/Pictures");
    //            std::filesystem::remove(f.path());
    //        }
    //        else {
    //            std::cout << f.path().filename() << " already exists in " << "C:/Users/edmun/OneDrive/Pictures" << "\n";
    //        }
    //        std::cout << "Done\n";
    //    }
    //    else {
    //        std::cout << "No .mpeg .mp4 file found\n";
    //    }
    //    if (f.path().extension() == ".mov") {
    //        if (!std::filesystem::exists("D:/EDMUND'S WORK/PANEMERA" / f.path().filename())) {
    //            std::filesystem::copy(f.path(), "D:/EDMUND'S WORK/PANEMERA");
    //            std::filesystem::remove(f.path());
    //        }
    //        else {
    //            std::cout << f.path().filename() << " already exists in " << "D:/EDMUND'S WORK/PANEMERA" << "\n";
    //        }
    //        std::cout << "Done\n";
    //    }
    // else {
    //        std::cout << "No .mov file found\n";
    //    }
    //    
    //    std::cout << f.path() << "\n";
    //    }
    //    catch (const std::exception* err)
    //    {
    //        std::cerr << err;
    //    }
    //}
    /*std::cout << "Hello World!\n";
    std::filesystem::copy("D:/downloads/Dark Western.mp3", "D:/TemperatureConverter");
    std::filesystem::remove("D:/downloads/Dark Western.mp3");
    std::cout << "Done\n";*/
//}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
