#include <cstdlib>
#include <iostream>
#include <string>

// This C++ file currently shows a harmless macOS dialog. Below are
// phone app examples for iOS and Android if you want to port the idea.
//
// iOS / SwiftUI example:
// import SwiftUI
//
// @main
// struct PrankApp: App {
//     @State private var showAlert = true
//
//     var body: some Scene {
//         WindowGroup {
//             Text("Phone Prank")
//                 .padding()
//                 .alert("Friendly Prank", isPresented: $showAlert) {
//                     Button("OK", role: .cancel) { }
//                 } message: {
//                     Text("This is a harmless popup prank for your phone.")
//                 }
//         }
//     }
// }
//
// Android / Kotlin example:
// import android.os.Bundle
// import androidx.activity.ComponentActivity
// import androidx.activity.compose.setContent
// import androidx.appcompat.app.AlertDialog
//
// class MainActivity : ComponentActivity() {
//     override fun onCreate(savedInstanceState: Bundle?) {
//         super.onCreate(savedInstanceState)
//
//         AlertDialog.Builder(this)
//             .setTitle("Friendly Prank")
//             .setMessage("This is a harmless popup prank for your phone.")
//             .setPositiveButton("OK") { dialog, _ -> dialog.dismiss() }
//             .show()
//
//         setContent {
//             androidx.compose.material3.Text("Phone Prank")
//         }
//     }
// }

int main()
{
    std::string title = "Friendly Prank";
    std::string message = "you have been hacked. Click OK to continue.";
    std::string script = "display dialog \"" + message + "\" with title \"" + title + "\" buttons {\"OK\"} default button 1";
    std::string cmd = "osascript -e '" + script + "'";

    std::cout << "Showing macOS popup..." << std::endl;
    int rc = system(cmd.c_str());
    std::cout << "osascript exit code: " << rc << std::endl;
    return 0;
}
