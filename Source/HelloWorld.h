/**
 * @file HelloWorld.h
 * @brief Hello Worldの出力を行います
 */

namespace App{
	/**
	 * Hello Worldの出力を行います
	 *
	 * 様々な言語のHello Worldを出力することができます。<br>
	 * 言語は SetLanguage(Language)を使用して指定します。
	 *
	 * @code
	 * HelloWorld helloWorld;
	 *
	 * helloWorld.SetLanguage(HelloWorld::Language::kEnglish);
	 * helloWorld.Output(); // Hello World
	 * @endcode
	 * また、静的関数を使用して直接各言語ごとに出力することも可能です
	 */
	class HelloWorld{
	public:
		/**
		 * 言語
		 */
		enum class Language{
			kEnglish,	//!< 英語
			kJapanese,	//!< 日本語
			kGermany,	//!< ドイツ語
			kFrench,	//!< フランス語
		};

	public:
		/**
		 * @name 簡易出力用
		 */
		//@{

		/**
		 * 英語で出力します
		 */
		static void OutputEnglish();

		/**
		 * 日本語で出力します
		 */
		static void OutputJapanese();

		/**
		 * ドイツ語で出力します
		 */
		static void OutputGermany();

		/**
		 * フランス語で出力します
		 */
		static void OutputFrench();

		//@}

	public:
		/**
		 * コンストラクタ
		 */
		HelloWorld();

		/**
		 * デストラクタ
		 */
		~HelloWorld() = default;

		/**
		 * Hello Worldを出力します
		 *
		 * SetLanguage関数で出力する言語を設定することができます
		 * @see SetLanguage
		 */
		void Output();

		/**
		 * 言語を設定します
		 * @param	language	言語
		 */
		void SetLanguage(Language language);

		/**
		 * 設定されている言語を取得します
		 * @return	設定されている言語
		 */
		Language GetLanguage() const;

	private:
		Language	language_;	//!< 言語
	};

	//--------------------------------------------------------------------------
	inline void HelloWorld::SetLanguage(Language language)
	{
		language_ = language;
	}

	//--------------------------------------------------------------------------
	inline HelloWorld::Language HelloWorld::GetLanguage() const
	{
		return language_;
	}
} // namespace App

