#include "ProperTrenchCoatsGUI.h"
#include <QtWidgets/QApplication>

#include <Windows.h>
#include "Controller.h"
#include "TrenchCoatStore.h"
#include "UI.h"
#include <QMessageBox>
#include "CSVCart.h"

using namespace std;

int main(int argc, char *argv[])
{
	try {
		QApplication a(argc, argv);

		Repository repo{ "Coats.txt", CoatValidator{} };

		/*Coat c1{ "BEI52", 52, "Beige", 399.98, 3, "http://lp2.hm.com/hmprod?set=source[/environment/2016/8FZ_0205_037R.jpg]&call=url[file:/product/main]" };
		Coat c2{ "PNK32", 32, "Pink", 159.95, 4, "http://lp2.hm.com/hmprod?set=source[/environment/2016/8EZ_0149_013R.jpg]&call=url[file:/product/main]" };
		Coat c3{ "BLU38", 38, "Blue", 199.99, 2, "http://lp2.hm.com/hmprod?set=source[/environment/2017/8LZ_0056_026R.jpg]&call=url[file:/product/main]" };
		Coat c4{ "GRN40", 40, "Green", 229.95, 0, "http://lp2.hm.com/hmprod?set=source[/environment/2017/8MZ_0076_010R.jpg]&call=url[file:/product/main]" };
		Coat c5{ "PNK36", 36, "Pink", 159.14, 0, "http://lp2.hm.com/hmprod?set=source[/environment/2016/8EZ_0149_013R.jpg]&call=url[file:/product/main]" };
		Coat c6{ "BEI48", 48, "Beige", 399.98, 1, "http://lp2.hm.com/hmprod?set=source[/environment/2016/8FZ_0205_037R.jpg]&call=url[file:/product/main]" };
		Coat c7{ "SAT42", 42, "Satin", 248.95, 5, "http://lp2.hm.com/hmprod?set=source[/model/2017/E00%200488077%20003%2066%202177.jpg]&call=url[file:/product/main]" };
		Coat c8{ "CAM46", 46, "Camel", 599.98, 2, "http://lp2.hm.com/hmprod?set=source[/environment/2016/7YM_0545_049R.jpg]&call=url[file:/product/main]" };
		Coat c9{ "CAM50", 50, "Camel", 579.98, 0, "http://lp2.hm.com/hmprod?set=source[/environment/2016/7YM_0545_049R.jpg]&call=url[file:/product/main]" };
		Coat c10{ "GRY38", 38, "Light-grey", 499.98, 4, "http://lp2.hm.com/hmprod?set=source[/environment/2017/8GZ_0311_003R.jpg]&call=url[file:/product/main]" };
		repo.addNoCheck(c1);
		repo.addNoCheck(c2);
		repo.addNoCheck(c3);
		repo.addNoCheck(c4);
		repo.addNoCheck(c5);
		repo.addNoCheck(c6);
		repo.addNoCheck(c7);
		repo.addNoCheck(c8);
		repo.addNoCheck(c9);
		repo.addNoCheck(c10);*/

		/*int file_type;
		cout << "Enter 1 for CSV or 2 for HTML: ";
		cin >> file_type;
		if (cin.fail()) {
			cout << "You did not enter an integer. Program stopping.\n\n";
			cin.clear();
			cin.ignore();
			return 0;
		}
		if (file_type == 1) {
			FileCart* cart = new CSVCart{};
			Controller ctrl{ repo,cart };
			TrenchCoatStore appgui{ ctrl };
			appgui.show();
			return a.exec();
		}
		else if (file_type == 2) {
			FileCart* cart = new HTMLCart{};
			Controller ctrl{ repo,cart };

		}
		else {
			cout << "At least you tried!\n";
			return 0;
		}*/

		FileCart* cart = new CSVCart{};

		Controller ctrl{ repo, cart };

		/*UI ui{ ctrl };
		ui.run();
		return 0;*/

		//ProperTrenchCoatsGUI appgui{ ctrl };
		TrenchCoatStore appgui{ ctrl };
		appgui.show();
		return a.exec();
	}
	catch (FileException fe) {
		cout << "Repository file could not be opened!The application will terminate." << endl;
		system("pause");
		return 1;
	}
}
