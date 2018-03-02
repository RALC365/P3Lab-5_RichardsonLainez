class MiClase{
	//atributos o metodos privados
	private:
		int codigo;
		string nombre;
	//metodos publicos
	public:
		MiClase();
		MiClase(string,int);
		virtual int getCodigo();
		void setCodigo(int);
		void setNombre(string);
		string getNombre();

	//destructor
	~MiClase();
};

#endif
